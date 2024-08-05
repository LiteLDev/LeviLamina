#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class SearchFeature : public ::IFeature {
public:
    // prevent constructor by default
    SearchFeature& operator=(SearchFeature const&);
    SearchFeature(SearchFeature const&);
    SearchFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SearchFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND
};
