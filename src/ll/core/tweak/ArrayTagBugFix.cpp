#include "mc/nbt/ByteArrayTag.h"
#include "mc/nbt/IntArrayTag.h"

#include "ll/api/memory/Hook.h"

LL_TYPED_INSTANCE_HOOK(
    ByteArrayTagEqualsHook,
    HookPriority::Normal,
    ByteArrayTag,
    "?equals@ByteArrayTag@@UEBA_NAEBVTag@@@Z",
    // &ByteArrayTag::equals,
    bool,
    Tag const& other
) {
    if (getId() != other.getId() || data.mSize != ((ByteArrayTag&)other).data.mSize) { return false; }
    return memcmp(data.mBuffer.get(), ((ByteArrayTag&)other).data.mBuffer.get(), data.mSize) == 0;
}

LL_TYPED_INSTANCE_HOOK(
    IntArrayTagEqualsHook,
    HookPriority::Normal,
    IntArrayTag,
    "?equals@IntArrayTag@@UEBA_NAEBVTag@@@Z",
    // &IntArrayTag::equals,
    bool,
    Tag const& other
) {
    if (getId() != other.getId() || data.mSize != ((IntArrayTag&)other).data.mSize) { return false; }
    return memcmp(data.mBuffer.get(), ((IntArrayTag&)other).data.mBuffer.get(), data.mSize * sizeof(int)) == 0;
}
namespace ll::bugfix {
void enableArrayTagBugFix() {
    static ll::memory::HookAutoRegister<ByteArrayTagEqualsHook> r1;
    static ll::memory::HookAutoRegister<IntArrayTagEqualsHook>  r2;
}
} // namespace ll::bugfix
