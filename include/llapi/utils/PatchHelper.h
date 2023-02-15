#pragma once
#include <memoryapi.h>
#include <exception>
#include <string>

// An Example to shou you how to use PatchHelper<> to patch the program
// in this example, we change the code to call Item::_useOn via vftable in specific function
// this is way better that modify vftable directly in some situation like this
//
//bool _Item_UseOn_Hook(Item* _this, ItemStack& item, Actor& actor, BlockPos blockPos, unsigned char unk, Vec3& pos) {
//    logger.info("Item::_useOn");
//    return _this->_useOn(item, actor, blockPos, unk, pos);
//}
//useOnHook() {
//    constexpr size_t max_step = 0x300;
//    constexpr size_t ori_size = 11;
//
//    unsigned char* begin = (unsigned char*)ll::memory::getPtr("?useOn@Item@@QEBA_NAEAVItemStack@@AEAVActor@@HHHEAEBVVec3@@@Z");
//    unsigned char* end = begin + max_step;
//
//    PatchHelper<ori_size> ori({
//        0x90,                                    // nop
//        0x48, 0x8B, 0x07,                        // mov    rax, [rdi]
//        0x4C, 0x8B, 0x90, 0x30, 0x04, 0x00, 0x00 // mov   r10, [rax+430h]
//    });
//
//    unsigned char* fn = (unsigned char*)new unsigned __int64((unsigned __int64)_Item_UseOn_Hook);
//
//    PatchHelper<ori_size> target({
//        0x90,                                                               // nop
//        0x49, 0xBA, fn[0], fn[1], fn[2], fn[3], fn[4], fn[5], fn[6], fn[7], // mov   r10, _Item_UseOn_Hook
//    });
//
//    unsigned char* found = find(begin, end, ori.data, ori_size);
//    if (!found) {
//        printf("Failed to hook Item::_useOn (asm patch target not found)\n");
//        return;
//    }
//    printf("Found target asm at %X (%X)\n", found, found - begin);
//    if (!((PatchHelper<ori_size>*)found)->EasyPatch(ori, target)) {
//        printf("Failed to patch Item::_useOn\n");
//    }
//}

template <int len>
struct PatchHelper {
    unsigned char data[len];
    using ref_t = unsigned char (&)[len];
    constexpr bool operator==(ref_t ref) const noexcept {
        return memcmp(data, ref, sizeof data) == 0;
    }
    constexpr bool operator!=(ref_t ref) const noexcept {
        return memcmp(data, ref, sizeof data) != 0;
    }
    constexpr bool operator==(PatchHelper ref) const noexcept {
        return memcmp(data, ref.data, sizeof data) == 0;
    }
    constexpr bool operator!=(PatchHelper ref) const noexcept {
        return memcmp(data, ref.data, sizeof data) != 0;
    }
    inline void operator=(ref_t ref) {
        memcpy(data, ref, sizeof data);
    }
    inline bool DoPatch(PatchHelper expected, PatchHelper patched) {
        if (*this == expected) {
            *this = patched;
            return true;
        }
        return false;
    }
    inline bool EasyPatch(PatchHelper expected, PatchHelper patched) {
        DWORD old, tmp;
        VirtualProtect((LPVOID)this, (SIZE_T)len, PAGE_EXECUTE_READWRITE, &old);
        bool result = DoPatch(expected, patched);
        VirtualProtect((LPVOID)this, (SIZE_T)len, old, &tmp);
        return result;
    }

    inline std::string Dump() const noexcept {
        char buffer[2 * len + 1] = {};
        char* ptr = buffer;
        for (auto ch : data)
            ptr += sprintf(ptr, "%02X", (unsigned)ch);
        return {buffer};
    }
};

struct NopFiller {
    template <int len>
    inline operator PatchHelper<len>() {
        PatchHelper<len> ret;
        memset(ret.data, 0x90, len);
        return ret;
    }
};