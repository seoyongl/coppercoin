#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a BIP155 serialized (networkID, addr, port) tuple.
 */
static const uint8_t chainparams_seed_main[] = {
    0x01,0x04,0x98,0x45,0xa0,0xb9,0x1c,0xa5,
    0x01,0x04,0x98,0x43,0x71,0xe5,0x1c,0xa5,
    0x01,0x04,0xc0,0x09,0xb8,0x84,0x1c,0xa5,
    0x01,0x04,0xc0,0x09,0xb9,0x38,0x1c,0xa5,
};

static const uint8_t chainparams_seed_test[] = {
    0x01,0x04,0x98,0x45,0xa6,0x68,0x43,0xb5,
    0x01,0x04,0x98,0x45,0xaf,0xdc,0x43,0xb5,
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
