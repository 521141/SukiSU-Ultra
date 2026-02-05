#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// ShirkNeko/SukiSU
#define EXPECTED_SIZE_SHIRKNEKO 0x17f
#define EXPECTED_HASH_SHIRKNEKO                                                \
    "3f271d166479fad0b786952d0e366d1cfd9edff9d58951c7cc15dd4e342de0f9"

typedef struct {
    u32 size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
