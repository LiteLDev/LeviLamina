#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloudUtils {

enum class Operation : int {
    Unknown                 = 0,
    GetMetadataForDriveItem = 1,
    Fetch                   = 2,
    GetDownloadUrl          = 3,
    GetFileContents         = 4,
    UploadStub              = 5,
    UploadFileContents      = 6,
    GetDriveItem            = 7,
    CloudImport             = 8,
    CloudExport             = 9,
    DeleteDriveItem         = 10,
    CreateUploadSession     = 11,
    ResumableUpload         = 12,
};

}
