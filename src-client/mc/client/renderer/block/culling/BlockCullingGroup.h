#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IMinecraftEventing;
struct BlockCullingData;
namespace PuvLoadData { struct LoadResultWithTiming; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockCullingGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::BlockCullingData>> mBlockCullingDataMap;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                           mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCullingGroup& operator=(BlockCullingGroup const&);
    BlockCullingGroup(BlockCullingGroup const&);
    BlockCullingGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockCullingGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::PuvLoadData::LoadResultWithTiming _parseBlockCullingData(
        ::std::string_view             fileWithExtension,
        ::std::string const&           fileData,
        ::MolangVersion                molangVersion,
        bool                           isBaseGamePack,
        ::cereal::ReflectionCtx const& ctx
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::BlockCullingData> parseBlockCullingData(
        ::std::string_view             fileWithExtension,
        ::std::string const&           fileData,
        ::MolangVersion                molangVersion,
        bool                           isBaseGamePack,
        ::cereal::ReflectionCtx const& ctx
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
