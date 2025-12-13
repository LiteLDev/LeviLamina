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
    virtual ~IBiomeComponentGlue() = default;

    virtual bool resolveAndValidate(::SharedTypes::v1_20_60::IBiomeJsonComponent const&, ::BiomeRegistry const&) = 0;

    virtual void applyToBiome(::Biome&, ::SharedTypes::v1_20_60::IBiomeJsonComponent const&) const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Block const*
    _getResolvedBlock(::std::string const& fieldName, ::SharedTypes::v1_20_60::BlockSpecifier const& blockSpecifier);

    MCNAPI static ::std::vector<::Block const*> _getResolvedBlocks(
        ::std::string const&                                          fieldName,
        ::std::vector<::SharedTypes::v1_20_60::BlockSpecifier> const& blockSpecifiers
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
