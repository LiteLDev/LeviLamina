#include "gtest/gtest.h"

#include "ll/api/memory/Memory.h"

#include <array>
#include <cstdint>

namespace {

class VtableIndexProbe {
public:
    void nonVirtual();
};

LL_NOINLINE void VtableIndexProbe::nonVirtual() {}

} // namespace

TEST(VTableTest, ReturnsNoIndexForNullOrUnsupportedMemberFunctions) {
    EXPECT_FALSE(ll::memory::getVtableIndex(nullptr).has_value());
    EXPECT_FALSE(ll::memory::getVtableIndex(&VtableIndexProbe::nonVirtual).has_value());
}

TEST(VTableTest, ExtractsClangClX64VtableIndexFromVirtualThunk) {
    std::array<std::uint8_t, 64> thunk{};
    thunk[0] = 0xE9; // Jump to the virtual-call thunk at offset 16.
    thunk[1] = 0x0B;
    thunk[16] = 0x48;
    thunk[17] = 0x8B;
    thunk[18] = 0x01;
    thunk[19] = 0x48;
    thunk[20] = 0x8B;
    thunk[21] = 0x80;
    thunk[22] = 0xF8; // 31 * sizeof(void*)

    auto const vtableIndex = ll::memory::getVtableIndex(static_cast<void*>(thunk.data()));
#if defined(_WIN32) && defined(_MSC_VER) && defined(__clang__) && defined(_M_X64)
    EXPECT_EQ(vtableIndex, 31u);
#else
    EXPECT_FALSE(vtableIndex.has_value());
#endif
}
