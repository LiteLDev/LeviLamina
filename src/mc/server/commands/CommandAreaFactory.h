#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CommandArea;
struct Bounds;
// clang-format on

class CommandAreaFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8d9568;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandAreaFactory& operator=(CommandAreaFactory const&);
    CommandAreaFactory(CommandAreaFactory const&);
    CommandAreaFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::CommandArea> _getArea(
        ::Bounds const& requiredArea,
        bool            allowNonTickingPlayerAndTickingAreaChunks,
        bool            allowUnloadedChunks,
        bool            allowPlayerChunks
    ) const;

    MCNAPI ::std::unique_ptr<::CommandArea> findAreaWithBuffer(
        ::BlockPos const& min,
        ::BlockPos const& max,
        int               commandVersion,
        bool              allowUnloadedChunks,
        bool              allowPlayerChunks
    ) const;
    // NOLINTEND
};
