// Distributed under the MIT software license, see the accompanying
// file LICENSE or http://www.opensource.org/licenses/mit-license.php.
// Based on the public domain XMSS reference implementation
// by Andreas Hülsing and Joost Rijneveld

#include <cstddef>
#include "wots.h"

typedef struct{
  unsigned int level;
  unsigned long long subtree;
  unsigned int subleaf;
} leafaddr;

typedef struct{
  wots_params wots_par;
  unsigned int n;
  unsigned int h;
} xmss_params;


int xmss_Genkeypair(unsigned char *pk, unsigned char *sk, unsigned char *seed, unsigned char h);
int xmss_updateSK(unsigned char *sk, unsigned long k);

int xmss_Signmsg(unsigned char *sk,
                 unsigned char *sig_msg,
                 unsigned char *msg,
                 const size_t msglen,
                 unsigned int h);

int xmss_Verifysig(unsigned char *msg,
                   const size_t msglen,
                   unsigned char *sig_msg,
                   const unsigned char *pk,
                   unsigned char h);