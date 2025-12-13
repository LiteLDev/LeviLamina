#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class MolangVariableMap;
class Vec3;
// clang-format on

struct ParticleEventRequest {
public:
    // ParticleEventRequest inner types declare
    // clang-format off
    struct BasicData;
    struct BreakingItemData;
    struct MolangData;
    struct TerrainData;
    struct TerrainSlideData;
    // clang-format on

    // ParticleEventRequest inner types define
    struct BasicData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk9592ec;
        ::ll::UntypedStorage<4, 12> mUnk5ed19b;
        ::ll::UntypedStorage<4, 12> mUnkd4cecb;
        ::ll::UntypedStorage<4, 4>  mUnkd1dbbf;
        ::ll::UntypedStorage<8, 16> mUnk81b715;
        ::ll::UntypedStorage<1, 1>  mUnk8fbf2d;
        // NOLINTEND

    public:
        // prevent constructor by default
        BasicData& operator=(BasicData const&);
        BasicData(BasicData const&);
        BasicData();
    };

    struct BreakingItemData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk5a4bf7;
        ::ll::UntypedStorage<4, 16> mUnkb9e8fd;
        ::ll::UntypedStorage<8, 64> mUnka77f79;
        // NOLINTEND

    public:
        // prevent constructor by default
        BreakingItemData& operator=(BreakingItemData const&);
        BreakingItemData(BreakingItemData const&);
        BreakingItemData();
    };

    struct MolangData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnkb99c1a;
        ::ll::UntypedStorage<4, 12> mUnkb40aba;
        ::ll::UntypedStorage<8, 56> mUnk80ccba;
        // NOLINTEND

    public:
        // prevent constructor by default
        MolangData& operator=(MolangData const&);
        MolangData(MolangData const&);
        MolangData();
    };

    struct TerrainData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk9daf0f;
        ::ll::UntypedStorage<8, 8>  mUnk130d0e;
        ::ll::UntypedStorage<4, 12> mUnkbf3dee;
        ::ll::UntypedStorage<4, 4>  mUnk562272;
        ::ll::UntypedStorage<4, 4>  mUnkc2c1ae;
        ::ll::UntypedStorage<4, 4>  mUnkc753fa;
        // NOLINTEND

    public:
        // prevent constructor by default
        TerrainData& operator=(TerrainData const&);
        TerrainData(TerrainData const&);
        TerrainData();
    };

    struct TerrainSlideData : public ::ParticleEventRequest::TerrainData {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        128,
        ::std::variant<
            ::ParticleEventRequest::BasicData,
            ::ParticleEventRequest::MolangData,
            ::ParticleEventRequest::TerrainData,
            ::ParticleEventRequest::TerrainSlideData,
            ::ParticleEventRequest::BreakingItemData>>
        mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParticleEventRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ParticleEventRequest
    addParticleEffect(::HashedString effect, ::Vec3 const& emitterPosition, ::MolangVariableMap molangVariables);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
