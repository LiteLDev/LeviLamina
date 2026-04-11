#pragma once

#include <atomic>
#include <cstddef>
#include <cstdint>
#include <map>
#include <memory>
#include <span>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "ll/api/utils/HashUtils.h"

#include "coverage/CoverageBackend.h"
#include "coverage/CoverageConfig.h"

#include "nlohmann/json.hpp"

namespace ll::io {
class Logger;
}

namespace ll::test::coverage {

struct LineKey {
    std::string file;
    uint32_t    line{};

    bool operator==(LineKey const& other) const noexcept { return file == other.file && line == other.line; }
};

struct LineKeyHash {
    size_t operator()(LineKey const& k) const noexcept {
        return ll::hash_utils::HashCombiner{}.add(k.file).add(k.line);
    }
};

enum class FunctionTag : uint8_t {
    None             = 0,
    SourceFunction   = 1 << 0,
    ExportedFunction = 1 << 1,
};

inline FunctionTag operator|(FunctionTag a, FunctionTag b) noexcept {
    return static_cast<FunctionTag>(static_cast<uint8_t>(a) | static_cast<uint8_t>(b));
}
inline FunctionTag operator&(FunctionTag a, FunctionTag b) noexcept {
    return static_cast<FunctionTag>(static_cast<uint8_t>(a) & static_cast<uint8_t>(b));
}
inline bool hasTag(FunctionTag flags, FunctionTag tag) noexcept { return static_cast<uint8_t>(flags & tag) != 0; }

struct FunctionInfo {
    std::string name;
    std::string demangledName;
    uintptr_t   start{};
    uintptr_t   end{};
    std::string sourceFile;
    uint32_t    startLine{};
    uint32_t    endLine{};
    FunctionTag tags{FunctionTag::None};
    bool        hasLineInfo{};
    size_t      addressCount{};
};

struct SourceFileInfo {
    std::string path;
    struct LineEntry {
        uint32_t line{};
        size_t   addressCount{};
    };
    std::vector<LineEntry> lines;
};

struct LineInfo {
    LineKey key;
    size_t  addressCount{};
};

struct CoverageHitSummary {
    size_t hitLines{};
    size_t totalLines{};
    size_t hitSourceFunctions{};
    size_t totalSourceFunctions{};
    size_t hitExportedFunctions{};
    size_t totalExportedFunctions{};
};

class CoverageCatalog {
public:
    explicit CoverageCatalog(CoverageConfig config) : mConfig(std::move(config)) {}

    struct ModuleInfo {
        std::string moduleName;
        std::string modulePath;
        uintptr_t   baseAddress{};
        size_t      imageSize{};
        bool        hasPdb{};
    };

    struct ModuleData {
        ModuleInfo                         info;
        std::vector<FunctionInfo>          functions;
        std::vector<LineInfo>              lines;
        std::vector<uintptr_t>             instrumentedAddresses;
        std::vector<std::vector<uint32_t>> addressToLines;
        std::vector<std::vector<uint32_t>> addressToFunctions;
        std::unordered_set<uintptr_t>      exportedAddresses;
    };

    bool buildForProcess();
    bool buildForModule(ModuleInfo mod);
    bool startSampling();
    void stopSampling();
    bool isSampling() const;

    std::vector<ModuleData> const&   modules() const { return mModules; }
    ModuleData const&                module(size_t moduleIndex) const { return mModules[moduleIndex]; }
    std::vector<FunctionInfo> const& functions(size_t moduleIndex) const { return module(moduleIndex).functions; }
    std::vector<uintptr_t> const&    instrumentedAddresses(size_t moduleIndex) const {
        return module(moduleIndex).instrumentedAddresses;
    }

    size_t totalInstrumentedAddresses() const { return mTotalInstrumentedAddresses; }

    CoverageConfig const& config() const { return mConfig; }
    std::string           normalizeSourcePath(std::string const& path) const;

    bool isTargetSourceFile(std::string const& path) const;
    void collectExports(ModuleInfo const& mod, std::unordered_set<uintptr_t>& out);
    void accumulateModuleHitSummary(
        size_t                   moduleIndex,
        std::span<uint8_t const> addressHits,
        CoverageHitSummary&      summary
    ) const;
    nlohmann::json     moduleHitsToJson(size_t moduleIndex, std::span<uint8_t const> addressHits) const;
    CoverageHitSummary summarizeHits() const;
    nlohmann::json     reportToJson() const;

    void           dumpStats(ll::io::Logger& logger) const;
    nlohmann::json toJson() const;

private:
    std::vector<ModuleData>          mModules;
    CoverageConfig                   mConfig;
    size_t                           mTotalInstrumentedAddresses{};
    std::unique_ptr<IAddressSampler> mSampler;
};

} // namespace ll::test::coverage
