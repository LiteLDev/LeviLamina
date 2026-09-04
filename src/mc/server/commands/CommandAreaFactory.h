#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CommandArea;
class Dimension;
struct Bounds;
// clang-format on

class CommandAreaFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandAreaFactory& operator=(CommandAreaFactory const&);
    CommandAreaFactory(CommandAreaFactory const&);
    CommandAreaFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CommandArea> _getArea(
        ::Bounds const& requiredArea,
        bool            allowNonTickingPlayerAndTickingAreaChunks,
        bool            allowUnloadedChunks,
        bool            allowPlayerChunks
    ) const;

    MCAPI ::std::unique_ptr<::CommandArea> _getNewCommandArea(::Bounds const& requiredArea) const;

    MCAPI ::std::unique_ptr<::CommandArea> findAreaWithBuffer(
        ::BlockPos const& min,
        ::BlockPos const& max,
        int               commandVersion,
        bool              allowUnloadedChunks,
        bool              allowPlayerChunks
    ) const;
    // NOLINTEND
};
