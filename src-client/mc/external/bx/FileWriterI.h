#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/CloserI.h"
#include "mc/external/bx/WriterOpenI.h"
#include "mc/external/bx/WriterSeekerI.h"

namespace bx {

struct FileWriterI : public ::bx::WriterOpenI, public ::bx::CloserI, public ::bx::WriterSeekerI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileWriterI() /*override*/ = default;
    // NOLINTEND
};

} // namespace bx
