#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class HashedString;
class IConstBlockSource;
class IRandom;
class Vec3;
struct BreakingItemParticleData;
struct ResolvedItemIconInfo;
namespace mce { class Color; }
// clang-format on

class ParticleProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk35e01e;
    ::ll::UntypedStorage<8, 128> mUnk32d7f2;
    ::ll::UntypedStorage<8, 128> mUnk25b551;
    ::ll::UntypedStorage<8, 128> mUnk48a2b8;
    ::ll::UntypedStorage<8, 128> mUnk98802f;
    ::ll::UntypedStorage<8, 128> mUnk4876b5;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleProvider& operator=(ParticleProvider const&);
    ParticleProvider(ParticleProvider const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleProvider() = default;

    // vIndex: 1
    virtual void addSprintParticleEffect(::Actor const&, ::IConstBlockSource const&, ::IRandom&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleProvider();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addSprintParticleEffect(::Actor const&, ::IConstBlockSource const&, ::IRandom&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
