#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class IClientDataTransferConfigurationMappingHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk6c63eb;
    // NOLINTEND

public:
    // prevent constructor by default
    IClientDataTransferConfigurationMappingHandler& operator=(IClientDataTransferConfigurationMappingHandler const&);
    IClientDataTransferConfigurationMappingHandler(IClientDataTransferConfigurationMappingHandler const&);
    IClientDataTransferConfigurationMappingHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientDataTransferConfigurationMappingHandler() = default;
    // NOLINTEND
};

} // namespace Editor::Services
