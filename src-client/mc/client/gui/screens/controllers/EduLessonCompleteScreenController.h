#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ImageExportSubController;
// clang-format on

class EduLessonCompleteScreenController : public ::ClientInstanceScreenController {
public:
    // EduLessonCompleteScreenController inner types declare
    // clang-format off
    struct ImageRecord;
    // clang-format on

    // EduLessonCompleteScreenController inner types define
    struct ImageRecord {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::EduLessonCompleteScreenController::ImageRecord>> mImageRecords;
    ::ll::TypedStorage<4, 4, int>                                                              mCurrentImageIndex;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ImageExportSubController>> mImageExportSubController;
    // NOLINTEND

public:
    // prevent constructor by default
    EduLessonCompleteScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduLessonCompleteScreenController() /*override*/ = default;

    virtual bool _isStillValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EduLessonCompleteScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);

    MCAPI void _buildImageRecords();

    MCAPI ::ui::ViewRequest _handleImagesExport();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $_isStillValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
