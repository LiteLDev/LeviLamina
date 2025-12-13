#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/PDFWriter.h"

// auto generated forward declare list
// clang-format off
struct PDFOptions;
struct PDFError;
// clang-format on

class PDFWriterWindows : public ::PDFWriter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void exportImagesToAlbum(::PDFOptions, ::std::function<void(::std::optional<::PDFError>)>) /*override*/;

    virtual ~PDFWriterWindows() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
