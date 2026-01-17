#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class ISyncStreamWriter; }
// clang-format on

namespace cohtml {

class IFileSystemWriter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFileSystemWriter() = default;

    virtual ::cohtml::ISyncStreamWriter* OpenFile(char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
