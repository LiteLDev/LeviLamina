#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PDFOptions;
struct PDFError;
// clang-format on

class PDFWriter : public ::std::enable_shared_from_this<::PDFWriter> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void exportImagesToAlbum(::PDFOptions, ::std::function<void(::std::optional<::PDFError>)>) = 0;

    virtual ~PDFWriter() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
