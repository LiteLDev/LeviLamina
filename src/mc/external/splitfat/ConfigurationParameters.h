#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/splitfat/ConfigParamsBase.h"

namespace SFAT {

class ConfigurationParameters : public ::SFAT::ConfigParamsBase {
public:
    // prevent constructor by default
    ConfigurationParameters& operator=(ConfigurationParameters const&);
    ConfigurationParameters(ConfigurationParameters const&);
    ConfigurationParameters();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual uint getClusterSize() const /*override*/;

    // vIndex: 2
    virtual uint getChunkSize() const /*override*/;

    // vIndex: 3
    virtual uint getDataBlockSize() const /*override*/;

    // vIndex: 4
    virtual uint getTotalBlocksCount() const /*override*/;

    // vIndex: 5
    virtual uint getFirstFileDataBlockIndex() const /*override*/;

    // vIndex: 0
    virtual ~ConfigurationParameters() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint $getClusterSize() const;

    MCAPI uint $getChunkSize() const;

    MCAPI uint $getDataBlockSize() const;

    MCAPI uint $getTotalBlocksCount() const;

    MCAPI uint $getFirstFileDataBlockIndex() const;
    // NOLINTEND
};

} // namespace SFAT
