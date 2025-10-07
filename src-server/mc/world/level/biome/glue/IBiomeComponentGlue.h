#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
class BiomeRegistry;
class Block;
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
    MCAPI static ::Block const*
    _getResolvedBlock(::std::string const& fieldName, ::SharedTypes::v1_20_60::BlockSpecifier const& blockSpecifier);

    MCAPI static ::std::vector<::Block const*> _getResolvedBlocks(
        ::std::string const&                                          fieldName,
        ::std::vector<::SharedTypes::v1_20_60::BlockSpecifier> const& blockSpecifiers
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
