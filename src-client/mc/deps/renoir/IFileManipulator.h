#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace renoir { class IStreamReader; }
// clang-format on

namespace renoir {

class IFileManipulator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileManipulator() = default;

    virtual bool EnumerateFolder(char const*) = 0;

    virtual char const* NextFile() = 0;

    virtual ::renoir::IStreamReader* OpenFile(char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace renoir
