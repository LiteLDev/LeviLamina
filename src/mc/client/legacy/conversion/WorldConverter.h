#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/legacy/conversion/WorldConverterBlobType.h"

// auto generated forward declare list
// clang-format off
namespace Legacy { struct WorldConversionReport; }
// clang-format on

namespace Legacy {

class WorldConverter {
public:
    // WorldConverter inner types define
    enum class Type : int {
        Xbox    = 0,
        Switch  = 1,
        Ps4     = 2,
        WiiU    = 3,
        Mock    = 4,
        Unknown = 5,
        Ps5     = 6,
    };

    enum class ConversionResult : int {
        Success = 0,
        Fail    = 1,
        Unknown = 2,
    };

public:
    // prevent constructor by default
    WorldConverter& operator=(WorldConverter const&);
    WorldConverter(WorldConverter const&);
    WorldConverter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldConverter() = default;

    // vIndex: 1
    virtual ::std::shared_future<void>
    addBlob(::std::string const&, ::Legacy::WorldConverterBlobType, ::std::vector<uchar>&&) = 0;

    // vIndex: 2
    virtual ::std::future<::Legacy::WorldConversionReport> complete() = 0;

    // vIndex: 3
    virtual void setEstimatedBlobCount(uint64);

    // vIndex: 4
    virtual void setBlobNames(::std::vector<::std::string> const&);
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

} // namespace Legacy
