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
    MCAPI explicit CommandAreaFactory(::Dimension& dimension);

    MCAPI ::std::unique_ptr<::CommandArea> _getArea(
        ::Bounds const& requiredArea,
        bool            allowNonTickingPlayerAndTickingAreaChunks,
        bool            allowUnloadedChunks,
        bool            allowPlayerChunks
    ) const;

    MCAPI ::std::unique_ptr<::CommandArea> findArea(
        ::BlockPos const& min,
        ::BlockPos const& max,
        bool              allowNonTickingPlayerAndTickingAreaChunks,
        bool              allowUnloadedChunks,
        bool              allowPlayerChunks
    ) const;

    MCAPI ::std::unique_ptr<::CommandArea> findAreaWithBuffer(
        ::BlockPos const& min,
        ::BlockPos const& max,
        int               commandVersion,
        bool              allowUnloadedChunks,
        bool              allowPlayerChunks
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool shouldAllowNonTickingPlayerAndTickingAreaChunks(int commandVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension);
    // NOLINTEND
};
