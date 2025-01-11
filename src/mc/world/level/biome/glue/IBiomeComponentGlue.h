#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Block;
class BlockDescriptor;
namespace SharedTypes::v1_20_60 { struct BlockSpecifier; }
namespace SharedTypes::v1_20_60 { struct IBiomeJsonComponent; }
// clang-format on

struct IBiomeComponentGlue {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IBiomeComponentGlue() = default;

    // vIndex: 1
    virtual bool resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const&, ::BiomeRegistry const&) = 0;

    // vIndex: 2
    virtual void applyToBiome(::Biome&, ::SharedTypes::v1_20_60::IBiomeJsonComponent const&) const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockDescriptor
    _getBlockDescriptorOrCrash(::std::unique_ptr<::BlockDescriptor> const& blockDescriptor);

    MCAPI static ::Block const* _getBlockOrCrash(::std::unique_ptr<::BlockDescriptor> const& blockDescriptor);

    MCAPI static ::std::unique_ptr<::BlockDescriptor>
    _getResolvedBlock(::SharedTypes::v1_20_60::BlockSpecifier const& blockSpecifier, ::std::string const& fieldName);

    MCAPI static ::std::vector<::std::unique_ptr<::BlockDescriptor>> _getResolvedBlocks(
        ::std::vector<::SharedTypes::v1_20_60::BlockSpecifier> const& blockSpecifiers,
        ::std::string const&                                          fieldName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
