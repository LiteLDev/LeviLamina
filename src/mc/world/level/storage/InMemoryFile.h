#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

class InMemoryFile {

public:
    // prevent constructor by default
    InMemoryFile& operator=(InMemoryFile const&) = delete;
    InMemoryFile(InMemoryFile const&)            = delete;
    InMemoryFile()                               = delete;

public:
    /**
     * @symbol ?append\@InMemoryFile\@\@QEAA?AVStatus\@leveldb\@\@AEBVSlice\@3\@\@Z
     */
    MCAPI class leveldb::Status append(class leveldb::Slice const&); // NOLINT
    /**
     * @symbol ?close\@InMemoryFile\@\@QEAA?AVStatus\@leveldb\@\@W4InMemoryAccessMode\@\@\@Z
     */
    MCAPI class leveldb::Status close(enum class InMemoryAccessMode); // NOLINT
    /**
     * @symbol
     * ?getFilename\@InMemoryFile\@\@QEBA?AV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    MCAPI class Core::PathBuffer<std::string> getFilename() const; // NOLINT
    /**
     * @symbol ?open\@InMemoryFile\@\@QEAA?AVStatus\@leveldb\@\@W4InMemoryAccessMode\@\@\@Z
     */
    MCAPI class leveldb::Status open(enum class InMemoryAccessMode); // NOLINT
    /**
     * @symbol ?read\@InMemoryFile\@\@QEBA?AVStatus\@leveldb\@\@_K0PEAVSlice\@3\@PEADAEA_K\@Z
     */
    MCAPI class leveldb::Status
    read(unsigned __int64, unsigned __int64, class leveldb::Slice*, char*, unsigned __int64&) const; // NOLINT
};
