#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraPresetsInternals {

struct CameraListFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk136718;
    ::ll::UntypedStorage<8, 56> mUnke795b3;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraListFile& operator=(CameraListFile const&);
    CameraListFile(CameraListFile const&);
    CameraListFile();
};

} // namespace CameraPresetsInternals
