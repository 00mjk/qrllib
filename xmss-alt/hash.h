/*
This code was taken from the XMSS reference implementation by Andreas Hülsing and Joost Rijneveld and is public domain.
*/

#ifndef HASH_H
#define HASH_H

#define IS_LITTLE_ENDIAN 1

unsigned char* addr_to_byte(unsigned char *bytes, const uint32_t addr[8]);
int prf(unsigned char *out, const unsigned char *in, const unsigned char *key, unsigned int keylen);
int h_msg(unsigned char *out,const unsigned char *in,unsigned long long inlen, const unsigned char *key, const unsigned int keylen, const unsigned int n);
int hash_h(unsigned char *out, const unsigned char *in, const unsigned char *pub_seed, uint32_t addr[8], const unsigned int n);
int hash_f(unsigned char *out, const unsigned char *in, const unsigned char *pub_seed, uint32_t addr[8], const unsigned int n);

#endif
