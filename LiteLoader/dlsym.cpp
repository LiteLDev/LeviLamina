//#include<lbpch.h>

#include <cstdio>
#include <filesystem>
#include <fstream>
#include <list>
#include <string>
#include <string_view>
#include <thread>
#include <unordered_map>
#include <vector>
#include "framework.h"
#include "pch.h"
#include <detours/detours.h>
using std::list;
using std::string, std::string_view;
using std::unordered_map, std::vector;
struct aphash {
    size_t operator()(const string &x) const {
        uint64_t rval = 0;
        for (size_t i = 0; x[i]; ++i) {
            if (i & 1) {
                rval ^= (~((rval << 11) ^ x[i] ^ (rval >> 5)));
            } else {
                rval ^= (~((rval << 7) ^ x[i] ^ (rval >> 3)));
            }
        }
        return rval;
    }
};
struct SymDBBase {
    // constexpr static int SEGMENT_MAX = 8;
    constexpr static int SEGMENT_HASH_ORDERED = 0;
    constexpr static int SEGMENT_RVA_INT      = 1;
    constexpr static int SEGMENT_STRINGS_IDX  = 2;
    constexpr static int SEGMENT_STRINGS      = 3;
    constexpr static int SEGMENT_COUNT        = 4;
};
#include <vector>
typedef int s32;
typedef int64_t s64;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;
template <int BKDR_MUL = 131, int BKDR_ADD = 0>
constexpr u64 BKDRHash(const char *x, int len) {
    u64 rval = 0;
    for (size_t i = 0; i < len; ++i) {
        rval *= BKDR_MUL;
        rval += x[i];
        rval += BKDR_ADD;
    }
    return rval;
}
#include <algorithm>
#include <fstream>

struct SymDBReader : SymDBBase {
    int SEGOFF[SEGMENT_COUNT], SIZSEG[SEGMENT_COUNT];
    std::ifstream ifs;
    u64 *hashes;
    u64 *hashes_end;
    template <typename T>
    T _pfread(int off = -1) {
        if (off != -1)
            ifs.seekg({off});
        T rv;
        ifs.read((char *)&rv, sizeof(T));
        return rv;
    }
    SymDBReader(const char *fn) {
        ifs.open(fn, std::ios::binary);
        for (int &off : SEGOFF) {
            off = _pfread<int>();
        }
        for (int &siz : SIZSEG) {
            siz = _pfread<int>();
        }
        if (SEGOFF[0] != 8 * SEGMENT_COUNT) {
            std::cerr << "SymDB format error detected!!" << std::endl;
        }
        int seg_begin = SEGOFF[SEGMENT_HASH_ORDERED];
        int seg_siz   = SIZSEG[SEGMENT_HASH_ORDERED];
        char *buf     = (char *)malloc(seg_siz);
        ifs.seekg({seg_begin});
        ifs.read(buf, seg_siz);
        hashes     = (u64 *)buf;
        hashes_end = hashes + (seg_siz / 8);
    }
    ~SymDBReader() { free(hashes); }
    int lookupInternal(u64 hash, int length, u64 hash2, const char *symname) {
        // step 1:lookup internal index
        u64 *lbound = std::lower_bound(hashes, hashes_end, hash);
        if (lbound == hashes_end || *lbound != hash)
            return -1;
        int internalIdx = int(std::distance(hashes, lbound));
        int matchCount  = 0;
        for (u64 *start = lbound; start < hashes_end; ++start) {
            if (*start == hash)
                ++matchCount;
            else
                break;
        }
        // printf("internalIdx [%d,%d)\n", internalIdx, internalIdx+matchCount);
        // step 2:load string offsets
        ifs.seekg({SEGOFF[SEGMENT_STRINGS_IDX] + internalIdx * 4});
        int string_off[256];
        for (int i = 0; i <= matchCount; ++i) {
            // string_off[i] = _pfread<int>(SEGOFF[SEGMENT_STRINGS_IDX] + (internalIdx + i) * 4);
            string_off[i] = _pfread<int>();
        }
        int idx_hits[128];
        int siz_idx_hits = 0;
        for (int i = 0; i < matchCount; ++i) {
            int strlength = string_off[i + 1] - string_off[i];
            if (length == strlength) {
                idx_hits[siz_idx_hits++] = internalIdx + i;
            }
        }
        if (siz_idx_hits == 0) {
            return -1;
        }
        int retval = -1;
        for (int i = 0; i < siz_idx_hits; ++i) {
            int nowidx = idx_hits[i];
            int strptr = string_off[i] + SEGOFF[SEGMENT_STRINGS];
            ifs.seekg({strptr});
            if (symname != nullptr) {
                static constexpr auto CMPSTR = [](std::ifstream &ifs, const char *symname) -> bool {
                    for (char const *compare = symname; *compare; ++compare) {
                        if (*compare != ifs.get())
                            return false;
                    }
                    return true;
                };
                if (CMPSTR(ifs, symname)) {
                    return _pfread<int>(SEGOFF[SEGMENT_RVA_INT] + nowidx * 4);
                }
            } else {
                static constexpr auto HASHSTR = [](std::ifstream &ifs, int len) -> u64 {
                    u64 rv = 0;
                    while (len-- > 0) {
                        rv = 131 * rv + char(ifs.get());
                    }
                    return rv;
                };
                if (HASHSTR(ifs, length) == hash2) {
                    if (retval != -1) {
                        std::cerr << "hash coll detected!" << std::endl;
                        exit(1);
                    }
                    retval = _pfread<int>(SEGOFF[SEGMENT_RVA_INT] + nowidx * 4);
                }
            }
        }
        return retval;
    }
    int getsym(const char *name) {
        int len = int(strlen(name));
        return lookupInternal(do_hash(name, len), len, 0, name);
    }
    std::string rva2name(int rva) {
        int siz_rva = SIZSEG[SEGMENT_RVA_INT];
        char *buf   = new char[siz_rva];
        ifs.seekg({SEGOFF[SEGMENT_RVA_INT]});
        ifs.read(buf, siz_rva);
        int *need  = (int *)buf;
        int *end   = need + siz_rva / 4;
        int *found = std::find(need, end, rva);
        if (found == end) {
            return "(nil)";
        }
        int internalId = int(std::distance(need, found));
        int soff       = _pfread<int>(SEGOFF[SEGMENT_STRINGS_IDX] + internalId * 4);
        int slen       = _pfread<int>(SEGOFF[SEGMENT_STRINGS_IDX] + internalId * 4 + 4) - soff;
        ifs.seekg({int(SEGOFF[SEGMENT_STRINGS] + soff)});
        std::string rv;
        rv.resize(slen, 0);
        ifs.read(rv.data(), slen);
        delete[] buf;
        return rv;
    }
    void dumpall(unordered_map<string, int, aphash> *hashMap) {
        int siz_rva = SIZSEG[SEGMENT_RVA_INT];
        char *buf   = new char[siz_rva];
        ifs.seekg({SEGOFF[SEGMENT_RVA_INT]});
        ifs.read(buf, siz_rva);
        int *need = (int *)buf;
        int *end  = need + siz_rva / 4;
        for (int a = 0; need + a != end; a++) {
            int *rva       = need + a;
            int internalId = int(std::distance(need, rva));
            int soff       = _pfread<int>(SEGOFF[SEGMENT_STRINGS_IDX] + internalId * 4);
            int slen       = _pfread<int>(SEGOFF[SEGMENT_STRINGS_IDX] + internalId * 4 + 4) - soff;
            ifs.seekg({int(SEGOFF[SEGMENT_STRINGS] + soff)});
            std::string rv;
            rv.resize(slen, 0);
            ifs.read((char *)rv.data(), slen);
            hashMap->insert({rv.data(), *rva});
            // hashMap[rv] = *rva;
            // printf("[%08d] %s\n", *rva, rv.c_str());
            rv.shrink_to_fit();
        }

        delete[] buf;
    }
};
int fnstat = 0;
static SymDBReader *SymDB;
static uintptr_t BaseAdr;
unordered_map<string, int, aphash> *FuncMap;
void InitFastDlsym() {
    std::cout << "[Info] Loading Symbols" << std::endl;
    unordered_map<string, int, aphash> *realFuncMap = new unordered_map<string, int, aphash>;
    SymDB->dumpall(realFuncMap);
    fnstat  = 1;
    SymDB   = nullptr;
    SymDB   = new SymDBReader("bedrock_server.symdb2");
    FuncMap = realFuncMap;
    std::cout << "[Info] FastDlsymInited " << realFuncMap->size() << std::endl;
}
void *dlsym_real(const char *x) {
    if (SymDB == nullptr) {
        if (!std::filesystem::exists("bedrock_server.symdb2")) {
            std::cerr << "SymDB not found" << std::endl << "Try to run SymDB2.exe" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(10));
            exit(1);
        }
        SymDB   = new SymDBReader("bedrock_server.symdb2");
        BaseAdr = (uintptr_t)GetModuleHandle(NULL);
        static_assert(sizeof(GetModuleHandle(NULL)) == 8);
    }
    if (fnstat == 0)
        InitFastDlsym();
    for (; fnstat == 0;) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    if (fnstat == 1) {
        auto iter = FuncMap->find(string(x));
        if (iter != FuncMap->end()) {
            return (void *)(BaseAdr + iter->second);
        } else {
            std::cerr << ("Failed to look up Function in Memory %s", x) << std::endl;
        }
    }
    auto rv = SymDB->getsym(x);
    if (rv == -1) {
        std::cerr << ("Failed to look up Function in SymDB2 %s", x) << std::endl;
        return nullptr;
    }
    return (void *)(BaseAdr + rv);
}
inline static void HookFunction__begin() {
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
}
inline static long HookFunction__finalize() {
    return DetourTransactionCommit();
}
static inline int realHook(void *oldfunc, void **poutold, void *newfunc) {
    void *target = oldfunc;
    HookFunction__begin();
    int rv = DetourAttach(&target, newfunc);
    HookFunction__finalize();
    *poutold = target;
    return rv;
}
int HookFunction(void *oldfunc, void **poutold, void *newfunc) {
    static unordered_map<void *, void **> ptr_pori;
    auto it = ptr_pori.find(oldfunc);
    if (it == ptr_pori.end()) {
        int rv = realHook(oldfunc, poutold, newfunc);
        if (rv != 0)
            return rv;
        ptr_pori[oldfunc] = poutold;
        return 0;
    } else {
        *poutold    = *it->second;
        *it->second = newfunc;
        return 0;
    }
}
