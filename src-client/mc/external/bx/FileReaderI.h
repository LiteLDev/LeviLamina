#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/CloserI.h"
#include "mc/external/bx/ReaderOpenI.h"
#include "mc/external/bx/ReaderSeekerI.h"

namespace bx {

struct FileReaderI : public ::bx::ReaderOpenI, public ::bx::CloserI, public ::bx::ReaderSeekerI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileReaderI() /*override*/ = default;
    // NOLINTEND
};

} // namespace bx
