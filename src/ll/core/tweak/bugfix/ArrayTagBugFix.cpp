#include "ll/core/tweak/bugfix/ArrayTagBugFix.h"
#include "ll/api/memory/Hook.h"
#include "mc/nbt/ByteArrayTag.h"
#include "mc/nbt/IntArrayTag.h"

namespace ll::inline bugfix {
LL_TYPE_INSTANCE_HOOK(
    ByteArrayTagEqualsHook,
    HookPriority::Normal,
    ByteArrayTag,
    "?equals@ByteArrayTag@@UEBA_NAEBVTag@@@Z",
    // &ByteArrayTag::equals,
    bool,
    Tag const& other
) {
    if (getId() != other.getId() || data.mSize != ((ByteArrayTag&)other).data.mSize) {
        return false;
    }
    return memcmp(data.mBuffer.get(), ((ByteArrayTag&)other).data.mBuffer.get(), data.mSize) == 0;
}
LL_TYPE_INSTANCE_HOOK(
    IntArrayTagEqualsHook,
    HookPriority::Normal,
    IntArrayTag,
    "?equals@IntArrayTag@@UEBA_NAEBVTag@@@Z",
    // &IntArrayTag::equals,
    bool,
    Tag const& other
) {
    if (getId() != other.getId() || data.mSize != ((IntArrayTag&)other).data.mSize) {
        return false;
    }
    return memcmp(data.mBuffer.get(), ((IntArrayTag&)other).data.mBuffer.get(), data.mSize * sizeof(int)) == 0;
}
struct ArrayTagBugFix::Impl {
    memory::HookRegistrar<ByteArrayTagEqualsHook, IntArrayTagEqualsHook> r;
};
void ArrayTagBugFix::call(bool enable) {
    if (enable) {
        if (!impl) impl = std::make_unique<Impl>();
    } else {
        impl = nullptr;
    }
}
ArrayTagBugFix::ArrayTagBugFix()  = default;
ArrayTagBugFix::~ArrayTagBugFix() = default;
} // namespace ll::inline bugfix
