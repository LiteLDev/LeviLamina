#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PDFError;
struct PDFOptions;
// clang-format on

class PDFWriter : public ::std::enable_shared_from_this<::PDFWriter> {
public:
    // prevent constructor by default
    PDFWriter& operator=(PDFWriter const&);
    PDFWriter(PDFWriter const&);
    PDFWriter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void exportImagesToAlbum(::PDFOptions, ::std::function<void(::std::optional<::PDFError>)>) = 0;

    // vIndex: 1
    virtual ~PDFWriter() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
