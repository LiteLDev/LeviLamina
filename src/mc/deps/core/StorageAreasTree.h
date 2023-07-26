#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
// clang-format on

namespace Core {

class StorageAreasTree {
public:
    // StorageAreasTree inner types declare
    // clang-format off
    struct TreeChild;
    // clang-format on

    // StorageAreasTree inner types define
    struct TreeChild {

    public:
        // prevent constructor by default
        TreeChild& operator=(TreeChild const&) = delete;
        TreeChild(TreeChild const&)            = delete;
        TreeChild()                            = delete;

    public:
        /**
         * @symbol ??4TreeChild\@StorageAreasTree\@Core\@\@QEAAAEAU012\@$$QEAU012\@\@Z
         */
        MCAPI struct Core::StorageAreasTree::TreeChild& operator=(struct Core::StorageAreasTree::TreeChild&&); // NOLINT
        /**
         * @symbol ??1TreeChild\@StorageAreasTree\@Core\@\@QEAA\@XZ
         */
        MCAPI ~TreeChild(); // NOLINT
    };

public:
    // prevent constructor by default
    StorageAreasTree& operator=(StorageAreasTree const&) = delete;
    StorageAreasTree(StorageAreasTree const&)            = delete;
    StorageAreasTree()                                   = delete;

public:
    /**
     * @symbol ?getStorageArea\@StorageAreasTree\@Core\@\@QEBAPEAVFileStorageArea\@2\@AEBVPath\@2\@\@Z
     */
    MCAPI class Core::FileStorageArea* getStorageArea(class Core::Path const&) const; // NOLINT
    /**
     * @symbol ?insertStorageArea\@StorageAreasTree\@Core\@\@QEAAXAEAVFileStorageArea\@2\@\@Z
     */
    MCAPI void insertStorageArea(class Core::FileStorageArea&); // NOLINT
    /**
     * @symbol ?removeStorageArea\@StorageAreasTree\@Core\@\@QEAAXAEAVFileStorageArea\@2\@\@Z
     */
    MCAPI void removeStorageArea(class Core::FileStorageArea&); // NOLINT
    /**
     * @symbol
     * ?teardown\@StorageAreasTree\@Core\@\@QEAAX$$QEAV?$function\@$$A6AXAEAVFileStorageArea\@Core\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void teardown(class std::function<void(class Core::FileStorageArea&)>&&); // NOLINT
};

}; // namespace Core
