#pragma once

#include "ll/api/base/StdInt.h"
#include "ll/api/memory/Memory.h"

#include <exception>
#include <functional>
#include <string>


// An Example to shou you how to use PatchHelper<> to patch the program
// in this example, we change the code to call Item::_useOn via vftable in specific function
// this is way better that modify vftable directly in some situation like this
//
// bool _Item_UseOn_Hook(Item* _this, ItemStack& item, Actor& actor, BlockPos blockPos, uchar unk, Vec3& pos) {
//    logger.info("Item::_useOn");
//    return _this->_useOn(item, actor, blockPos, unk, pos);
//}
// useOnHook() {
//    constexpr size_t max_step = 0x300;
//    constexpr size_t ori_size = 11;
//
//    uchar* begin = (uchar*)ll::memory::resolveSymbol("?useOn@Item@@QEBA_NAEAVItemStack@@AEAVActor@@HHHEAEBVVec3@@@Z");
//    uchar* end = begin + max_step;
//
//    PatchHelper<ori_size> ori({
//        0x90,                                    // nop
//        0x48, 0x8B, 0x07,                        // mov    rax, [rdi]
//        0x4C, 0x8B, 0x90, 0x30, 0x04, 0x00, 0x00 // mov   r10, [rax+430h]
//    });
//
//    uchar* fn = (uchar*)new uint64((uint64)_Item_UseOn_Hook);
//
//    PatchHelper<ori_size> target({
//        0x90,                                                               // nop
//        0x49, 0xBA, fn[0], fn[1], fn[2], fn[3], fn[4], fn[5], fn[6], fn[7], // mov   r10, _Item_UseOn_Hook
//    });
//
//    uchar* found = find(begin, end, ori.data, ori_size);
//    if (!found) {
//        printf("Failed to hook Item::_useOn (asm patch target not found)\n");
//        return;
//    }
//    printf("Found target asm at %X (%X)\n", found, found - begin);
//    if (!((PatchHelper<ori_size>*)found)->EasyPatch(ori, target)) {
//        printf("Failed to patch Item::_useOn\n");
//    }
//}

namespace ll::memory {

template <size_t len>
struct PatchHelper {
    uchar data[len];
    using ref_t = uchar (&)[len];
    constexpr bool operator==(ref_t ref) const noexcept { return memcmp(data, ref, sizeof data) == 0; }
    constexpr bool operator!=(ref_t ref) const noexcept { return memcmp(data, ref, sizeof data) != 0; }
    constexpr bool operator==(PatchHelper const& ref) const noexcept {
        return memcmp(data, ref.data, sizeof data) == 0;
    }
    constexpr bool operator!=(PatchHelper const& ref) const noexcept {
        return memcmp(data, ref.data, sizeof data) != 0;
    }
    PatchHelper& operator=(ref_t ref) { memcpy(data, ref, sizeof data); }

    bool doPatch(PatchHelper expected, PatchHelper patched) {
        if (*this == expected) {
            *this = patched;
            return true;
        }
        return false;
    }

    bool easyPatch(PatchHelper expected, PatchHelper patched) {
        bool result = false;
        ll::memory::modify((void*)this, len, [&]() { result = doPatch(expected, patched); });
        return result;
    }

    [[nodiscard]] std::string dump() const noexcept {
        char  buffer[2 * len + 1] = {};
        char* ptr                 = buffer;
        for (auto& ch : data) ptr += sprintf(ptr, "%02X", (uint)ch);
        return {buffer};
    }
};

struct NopFiller {
    template <size_t len>
    explicit operator PatchHelper<len>() {
        PatchHelper<len> ret;
        memset(ret.data, 0x90, len);
        return ret;
    }
};
} // namespace ll::memory
