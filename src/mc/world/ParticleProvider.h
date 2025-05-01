#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class HashedString;
class Vec3;
struct BreakingItemParticleData;
struct ResolvedItemIconInfo;
namespace mce { class Color; }
// clang-format on

class ParticleProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk35e01e;
    ::ll::UntypedStorage<8, 128> mUnk9deb54;
    ::ll::UntypedStorage<8, 128> mUnk876d92;
    ::ll::UntypedStorage<8, 128> mUnk499051;
    ::ll::UntypedStorage<8, 128> mUnka1cafa;
    ::ll::UntypedStorage<8, 128> mUnke1813e;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleProvider& operator=(ParticleProvider const&);
    ParticleProvider(ParticleProvider const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleProvider();

    MCNAPI ~ParticleProvider();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
