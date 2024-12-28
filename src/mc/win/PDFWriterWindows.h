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
    // prevent constructor by default
    PDFWriterWindows& operator=(PDFWriterWindows const&);
    PDFWriterWindows(PDFWriterWindows const&);
    PDFWriterWindows();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void exportImagesToAlbum(::PDFOptions, ::std::function<void(::std::optional<::PDFError>)>) /*override*/;

    // vIndex: 1
    virtual ~PDFWriterWindows() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $exportImagesToAlbum(::PDFOptions, ::std::function<void(::std::optional<::PDFError>)>);
    // NOLINTEND
};
