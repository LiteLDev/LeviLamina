#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
// clang-format on

class ImageExportSubController : public ::ClientInstanceScreenController {
public:
    // prevent constructor by default
    ImageExportSubController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImageExportSubController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ImageExportSubController(::std::shared_ptr<::ClientInstanceScreenModel> model);

    MCAPI ::ui::ViewRequest
    handleImagesExport(::std::vector<::Core::PathBuffer<::Core::BasicStackString<char, 1024>>> const& toExport);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
