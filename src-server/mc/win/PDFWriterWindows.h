#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/PDFWriter.h"

// auto generated forward declare list
// clang-format off
struct PDFError;
struct PDFOptions;
// clang-format on

class PDFWriterWindows : public ::PDFWriter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void exportImagesToAlbum(::PDFOptions, ::std::function<void(::std::optional<::PDFError>)>) /*override*/;

    // vIndex: 1
    virtual ~PDFWriterWindows() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
