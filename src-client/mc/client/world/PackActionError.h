#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace World {

enum class PackActionError : uchar {
    InvalidContentType                = 0,
    InvalidPackId                     = 1,
    InvalidWorldId                    = 2,
    ContentTierIncompatible           = 3,
    ContentTierIncompatibleMemory     = 4,
    ContentTierIncompatibleRayTracing = 5,
    PackDataWarning                   = 6,
    PackDependencyWarning             = 7,
    PackSelectErrorNoStore            = 8,
    PackSelectErrorRequiredDependency = 9,
    NoPackAccess                      = 10,
    UnownedContent                    = 11,
    NeedToDownloadPack                = 12,
    UnsupportedFileFormat             = 13,
    IncompletePack                    = 14,
    NoManifest                        = 15,
    MissingProperty                   = 16,
    WrongTypeProperty                 = 17,
    EmptyProperty                     = 18,
    InvalidProperty                   = 19,
    MalformedPropertyUUID             = 20,
    MalformedPropertyVERSION          = 21,
    DuplicateUUID                     = 22,
    InvalidJSON                       = 23,
    MissingModules                    = 24,
    MultipleModules                   = 25,
    UnsupportedFormatVersion          = 26,
    VersionTooHigh                    = 27,
    VersionTooLow                     = 28,
    InitializationTimeout             = 29,
    UnexpectedError                   = 30,
};

}
