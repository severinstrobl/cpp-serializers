/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <lcm/lcm_coretypes.h>

#ifndef __lcm_test_Record_hpp__
#define __lcm_test_Record_hpp__

#include <vector>
#include <string>

namespace lcm_test
{

class Record
{
    public:
        int32_t    nIds;

        std::vector< int64_t > ids;

        int32_t    nStrings;

        std::vector< std::string > strings;

    public:
        /**
         * Encode a message into binary form.
         *
         * @param buf The output buffer.
         * @param offset Encoding starts at thie byte offset into @p buf.
         * @param maxlen Maximum number of bytes to write.  This should generally be
         *  equal to getEncodedSize().
         * @return The number of bytes encoded, or <0 on error.
         */
        inline int encode(void *buf, int offset, int maxlen) const;

        /**
         * Check how many bytes are required to encode this message.
         */
        inline int getEncodedSize() const;

        /**
         * Decode a message from binary form into this instance.
         *
         * @param buf The buffer containing the encoded message.
         * @param offset The byte offset into @p buf where the encoded message starts.
         * @param maxlen The maximum number of bytes to reqad while decoding.
         * @return The number of bytes decoded, or <0 if an error occured.
         */
        inline int decode(const void *buf, int offset, int maxlen);

        /**
         * Retrieve the 64-bit fingerprint identifying the structure of the message.
         * Note that the fingerprint is the same for all instances of the same
         * message type, and is a fingerprint on the message type definition, not on
         * the message contents.
         */
        inline static int64_t getHash();

        /**
         * Returns "Record"
         */
        inline static const char* getTypeName();

        // LCM support functions. Users should not call these
        inline int _encodeNoHash(void *buf, int offset, int maxlen) const;
        inline int _getEncodedSizeNoHash() const;
        inline int _decodeNoHash(const void *buf, int offset, int maxlen);
        inline static uint64_t _computeHash(const __lcm_hash_ptr *p);
};

int Record::encode(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;
    int64_t hash = (int64_t)getHash();

    tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    tlen = this->_encodeNoHash(buf, offset + pos, maxlen - pos);
    if (tlen < 0) return tlen; else pos += tlen;

    return pos;
}

int Record::decode(const void *buf, int offset, int maxlen)
{
    int pos = 0, thislen;

    int64_t msg_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &msg_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (msg_hash != getHash()) return -1;

    thislen = this->_decodeNoHash(buf, offset + pos, maxlen - pos);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int Record::getEncodedSize() const
{
    return 8 + _getEncodedSizeNoHash();
}

int64_t Record::getHash()
{
    static int64_t hash = _computeHash(NULL);
    return hash;
}

const char* Record::getTypeName()
{
    return "Record";
}

int Record::_encodeNoHash(void *buf, int offset, int maxlen) const
{
    int pos = 0, tlen;

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->nIds, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->nIds > 0) {
        tlen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &this->ids[0], this->nIds);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &this->nStrings, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    for (int a0 = 0; a0 < this->nStrings; a0++) {
        char* __cstr = (char*) this->strings[a0].c_str();
        tlen = __string_encode_array(buf, offset + pos, maxlen - pos, &__cstr, 1);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    return pos;
}

int Record::_decodeNoHash(const void *buf, int offset, int maxlen)
{
    int pos = 0, tlen;

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->nIds, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    if(this->nIds) {
        this->ids.resize(this->nIds);
        tlen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this->ids[0], this->nIds);
        if(tlen < 0) return tlen; else pos += tlen;
    }

    tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &this->nStrings, 1);
    if(tlen < 0) return tlen; else pos += tlen;

    this->strings.resize(this->nStrings);
    for (int a0 = 0; a0 < this->nStrings; a0++) {
        int32_t __elem_len;
        tlen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &__elem_len, 1);
        if(tlen < 0) return tlen; else pos += tlen;
        if(__elem_len > maxlen - pos) return -1;
        this->strings[a0].assign(((const char*)buf) + offset + pos, __elem_len -  1);
        pos += __elem_len;
    }

    return pos;
}

int Record::_getEncodedSizeNoHash() const
{
    int enc_size = 0;
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    enc_size += __int64_t_encoded_array_size(NULL, this->nIds);
    enc_size += __int32_t_encoded_array_size(NULL, 1);
    for (int a0 = 0; a0 < this->nStrings; a0++) {
        enc_size += this->strings[a0].size() + 4 + 1;
    }
    return enc_size;
}

uint64_t Record::_computeHash(const __lcm_hash_ptr *)
{
    uint64_t hash = 0x07423a85e5af78bfLL;
    return (hash<<1) + ((hash>>63)&1);
}

}

#endif
