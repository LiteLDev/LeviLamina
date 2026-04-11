#include "coverage/CoverageCatalog.h"

#include "coverage/win/CoverageBackendImpl.h"

#include "ll/api/io/Logger.h"

#include "fmt/format.h"


#include <algorithm>
#include <cstddef>
#include <filesystem>
#include <map>
#include <memory>

namespace {

struct ResolvedModuleHits {
    std::vector<uint8_t> lineHits;
    std::vector<uint8_t> functionHits;
};

ResolvedModuleHits
resolveModuleHits(ll::test::coverage::CoverageCatalog::ModuleData const& module, std::span<uint8_t const> addressHits) {
    ResolvedModuleHits resolved{
        .lineHits     = std::vector<uint8_t>(module.lines.size(), 0),
        .functionHits = std::vector<uint8_t>(module.functions.size(), 0),
    };

    auto const limit = (std::min)(addressHits.size(), module.instrumentedAddresses.size());
    for (size_t addressIndex = 0; addressIndex < limit; ++addressIndex) {
        if (addressHits[addressIndex] == 0) {
            continue;
        }

        for (uint32_t lineIndex : module.addressToLines[addressIndex]) {
            resolved.lineHits[lineIndex] = 1;
        }
        for (uint32_t functionIndex : module.addressToFunctions[addressIndex]) {
            resolved.functionHits[functionIndex] = 1;
        }
    }

    return resolved;
}

static nlohmann::json buildModuleJson(
    ll::test::coverage::CoverageCatalog::ModuleData const& module,
    ResolvedModuleHits const*                              resolvedHits = nullptr
) {
    nlohmann::json jm;
    jm["name"]        = module.info.moduleName;
    jm["baseAddress"] = fmt::format("0x{:X}", module.info.baseAddress);
    jm["imageSize"]   = module.info.imageSize;
    jm["hasPdb"]      = module.info.hasPdb;
    jm["files"]       = nlohmann::json::array();
    jm["functions"]   = nlohmann::json::array();

    std::unordered_map<std::string, nlohmann::json> filesMap;
    for (size_t lineIndex = 0; lineIndex < module.lines.size(); ++lineIndex) {
        auto const& line = module.lines[lineIndex];
        auto&       jf   = filesMap[line.key.file];
        if (jf.is_null()) {
            jf = nlohmann::json{
                { "path",           line.key.file},
                {"lines", nlohmann::json::array()}
            };
        }

        nlohmann::json jl;
        jl["line"]         = line.key.line;
        jl["addressCount"] = line.addressCount;
        if (resolvedHits != nullptr) {
            jl["hit"] = resolvedHits->lineHits[lineIndex] != 0;
        }
        jf["lines"].push_back(jl);
    }
    for (auto& [path, jf] : filesMap) {
        jm["files"].push_back(jf);
    }

    for (size_t functionIndex = 0; functionIndex < module.functions.size(); ++functionIndex) {
        auto const&    fn = module.functions[functionIndex];
        nlohmann::json jf;
        jf["name"]             = fn.name;
        jf["demangledName"]    = fn.demangledName;
        jf["start"]            = fmt::format("0x{:X}", fn.start);
        jf["end"]              = fmt::format("0x{:X}", fn.end);
        jf["sourceFile"]       = fn.sourceFile;
        jf["startLine"]        = fn.startLine;
        jf["endLine"]          = fn.endLine;
        jf["hasLineInfo"]      = fn.hasLineInfo;
        jf["addressCount"]     = fn.addressCount;
        jf["isSourceFunction"] = ll::test::coverage::hasTag(fn.tags, ll::test::coverage::FunctionTag::SourceFunction);
        jf["isExportedFunction"] =
            ll::test::coverage::hasTag(fn.tags, ll::test::coverage::FunctionTag::ExportedFunction);
        if (resolvedHits != nullptr) {
            jf["hit"] = resolvedHits->functionHits[functionIndex] != 0;
        }
        jm["functions"].push_back(jf);
    }

    return jm;
}

} // namespace

namespace ll::test::coverage {

std::string CoverageCatalog::normalizeSourcePath(std::string const& path) const {
    return mConfig.normalizeSourcePath(path);
}

bool CoverageCatalog::isTargetSourceFile(std::string const& path) const { return mConfig.matchesSourceFile(path); }

void CoverageCatalog::collectExports(ModuleInfo const&, std::unordered_set<uintptr_t>&) {}

bool CoverageCatalog::buildForProcess() {
    auto moduleEnumerator = IModuleEnumerator::createDefault();
    if (!moduleEnumerator) {
        return false;
    }
    for (auto& discovered : moduleEnumerator->enumerateModules({})) {
        if (!config().matchesModule(discovered.modulePath, discovered.moduleName, {})) {
            continue;
        }

        ModuleInfo mod{
            .moduleName  = discovered.moduleName,
            .modulePath  = discovered.modulePath,
            .baseAddress = discovered.baseAddress,
            .imageSize   = discovered.imageSize,
            .hasPdb      = discovered.hasDebugSymbols,
        };
        buildForModule(std::move(mod));
    }
    return true;
}

bool CoverageCatalog::startSampling() {
    if (mSampler && mSampler->isRunning()) {
        return true;
    }

    auto sampler = IAddressSampler::createDefault();
    if (!sampler) {
        return false;
    }

    for (auto const& module : mModules) {
        if (!sampler->addModule(module.info.baseAddress, module.info.imageSize, module.instrumentedAddresses)) {
            return false;
        }
    }

    if (!sampler->start()) {
        return false;
    }

    mSampler = std::move(sampler);
    return true;
}

void CoverageCatalog::stopSampling() {
    if (mSampler) {
        mSampler->stop();
    }
}

bool CoverageCatalog::isSampling() const { return mSampler && mSampler->isRunning(); }

bool CoverageCatalog::buildForModule(ModuleInfo mod) {
    auto symbolProvider   = ISymbolProvider::createDefault();
    auto exportEnumerator = IExportEnumerator::createDefault();
    if (!symbolProvider || !exportEnumerator) {
        return false;
    }

    DiscoveredModule discovered{
        .moduleName      = mod.moduleName,
        .modulePath      = mod.modulePath,
        .baseAddress     = mod.baseAddress,
        .imageSize       = mod.imageSize,
        .hasDebugSymbols = mod.hasPdb,
    };
    symbolProvider->prepareModule(discovered);
    mod.hasPdb = discovered.hasDebugSymbols;

    auto& moduleData = mModules.emplace_back();
    moduleData.info  = std::move(mod);

    auto& funcs   = moduleData.functions;
    auto& lines   = moduleData.lines;
    auto& addrs   = moduleData.instrumentedAddresses;
    auto& addrLns = moduleData.addressToLines;
    auto& addrFns = moduleData.addressToFunctions;
    auto& exports = moduleData.exportedAddresses;

    exports = exportEnumerator->collectExportedAddresses(discovered);

    auto functionRecords = symbolProvider->enumerateFunctions(discovered);
    funcs.reserve(functionRecords.size());
    for (auto& record : functionRecords) {
        FunctionInfo info;
        info.name          = std::move(record.name);
        info.demangledName = std::move(record.demangledName);
        info.start         = record.start;
        info.end           = record.end;
        info.sourceFile    = normalizeSourcePath(record.sourceFile);
        info.startLine     = record.startLine;
        info.endLine       = record.endLine;
        info.hasLineInfo   = record.hasLineInfo;
        funcs.push_back(std::move(info));
    }

    std::unordered_map<LineKey, std::vector<uintptr_t>, LineKeyHash> lineAddresses;
    auto lineRecords = symbolProvider->enumerateLines(discovered);
    for (auto& record : lineRecords) {
        if (!isTargetSourceFile(record.file)) {
            continue;
        }

        LineKey key{normalizeSourcePath(record.file), record.line};
        auto&   vec = lineAddresses[key];
        if (vec.empty() || vec.back() != record.address) {
            vec.push_back(record.address);
        }

        for (auto& fn : funcs) {
            auto const functionEnd = fn.end > fn.start ? fn.end : fn.start + 1;
            if (fn.start != 0 && record.address >= fn.start && record.address < functionEnd) {
                if (record.line > fn.endLine) {
                    fn.endLine = record.line;
                }
                if (record.line < fn.startLine || fn.startLine == 0) {
                    fn.startLine = record.line;
                }
                fn.hasLineInfo = true;
            }
        }
    }

    std::vector<FunctionInfo> filteredFuncs;
    filteredFuncs.reserve(funcs.size());

    for (size_t i = 0; i < funcs.size(); ++i) {
        auto& f          = funcs[i];
        bool  isExported = exports.contains(f.start) && config().includeExportedFunctions;
        bool  isTarget   = isTargetSourceFile(f.sourceFile) && f.hasLineInfo && config().includeSourceFunctions;

        if (isExported) f.tags = f.tags | FunctionTag::ExportedFunction;
        if (isTarget) f.tags = f.tags | FunctionTag::SourceFunction;

        if (isTarget || isExported) {
            filteredFuncs.push_back(f);
        }
    }
    funcs = std::move(filteredFuncs);

    std::map<uintptr_t, size_t> addressToIndex;
    for (auto const& [lineKey, lineAddrs] : lineAddresses) {
        for (uintptr_t address : lineAddrs) {
            addressToIndex.emplace(address, 0);
        }
    }
    for (auto const& fn : funcs) {
        if (fn.start != 0) {
            addressToIndex.emplace(fn.start, 0);
        }
    }

    addrs.reserve(addressToIndex.size());
    for (auto& [address, index] : addressToIndex) {
        index = addrs.size();
        addrs.push_back(address);
    }

    addrLns.resize(addrs.size());
    addrFns.resize(addrs.size());

    std::unordered_map<LineKey, uint32_t, LineKeyHash> lineToIndex;
    lines.reserve(lineAddresses.size());
    for (auto const& [lineKey, lineAddrs] : lineAddresses) {
        auto lineIndex = static_cast<uint32_t>(lines.size());
        lineToIndex.emplace(lineKey, lineIndex);
        lines.push_back(LineInfo{lineKey, lineAddrs.size()});
        for (uintptr_t address : lineAddrs) {
            addrLns[addressToIndex.find(address)->second].push_back(lineIndex);
        }
    }

    std::vector<size_t> functionAddressCounts(funcs.size(), 0);
    for (size_t functionIndex = 0; functionIndex < funcs.size(); ++functionIndex) {
        auto const& fn = funcs[functionIndex];
        if (fn.start == 0) {
            continue;
        }

        auto const functionEnd = fn.end > fn.start ? fn.end : fn.start + 1;
        auto       it          = std::lower_bound(addrs.begin(), addrs.end(), fn.start);
        while (it != addrs.end() && *it < functionEnd) {
            auto const addressIndex = static_cast<size_t>(it - addrs.begin());
            addrFns[addressIndex].push_back(static_cast<uint32_t>(functionIndex));
            ++functionAddressCounts[functionIndex];
            ++it;
        }
    }

    for (size_t functionIndex = 0; functionIndex < funcs.size(); ++functionIndex) {
        funcs[functionIndex].addressCount = functionAddressCounts[functionIndex];
    }

    mTotalInstrumentedAddresses += addrs.size();
    return true;
}

void CoverageCatalog::accumulateModuleHitSummary(
    size_t                   moduleIndex,
    std::span<uint8_t const> addressHits,
    CoverageHitSummary&      summary
) const {
    auto const& module       = this->module(moduleIndex);
    auto const  resolvedHits = resolveModuleHits(module, addressHits);

    summary.totalLines += module.lines.size();
    for (uint8_t hit : resolvedHits.lineHits) {
        if (hit != 0) {
            ++summary.hitLines;
        }
    }

    for (size_t functionIndex = 0; functionIndex < module.functions.size(); ++functionIndex) {
        auto const& fn    = module.functions[functionIndex];
        bool const  isHit = resolvedHits.functionHits[functionIndex] != 0;

        if (hasTag(fn.tags, FunctionTag::SourceFunction)) {
            ++summary.totalSourceFunctions;
            if (isHit) {
                ++summary.hitSourceFunctions;
            }
        }
        if (hasTag(fn.tags, FunctionTag::ExportedFunction)) {
            ++summary.totalExportedFunctions;
            if (isHit) {
                ++summary.hitExportedFunctions;
            }
        }
    }
}

nlohmann::json CoverageCatalog::moduleHitsToJson(size_t moduleIndex, std::span<uint8_t const> addressHits) const {
    auto const& module       = this->module(moduleIndex);
    auto const  resolvedHits = resolveModuleHits(module, addressHits);
    return buildModuleJson(module, &resolvedHits);
}

CoverageHitSummary CoverageCatalog::summarizeHits() const {
    CoverageHitSummary summary{};
    if (!mSampler) {
        return summary;
    }

    auto const limit = (std::min)(modules().size(), mSampler->moduleCount());
    for (size_t moduleIndex = 0; moduleIndex < limit; ++moduleIndex) {
        accumulateModuleHitSummary(moduleIndex, mSampler->addressHits(moduleIndex), summary);
    }
    return summary;
}

nlohmann::json CoverageCatalog::reportToJson() const {
    nlohmann::json report;
    report["schema"]                     = "coverage-report-v1";
    report["totalInstrumentedAddresses"] = mTotalInstrumentedAddresses;

    auto summary      = summarizeHits();
    report["summary"] = {
        {              "hitLines",               summary.hitLines},
        {            "totalLines",             summary.totalLines},
        {    "hitSourceFunctions",     summary.hitSourceFunctions},
        {  "totalSourceFunctions",   summary.totalSourceFunctions},
        {  "hitExportedFunctions",   summary.hitExportedFunctions},
        {"totalExportedFunctions", summary.totalExportedFunctions},
    };

    auto& modulesJson = report["modules"];
    if (!mSampler) {
        for (auto const& module : mModules) {
            modulesJson.push_back(buildModuleJson(module));
        }
        return report;
    }

    auto const limit = (std::min)(mModules.size(), mSampler->moduleCount());
    for (size_t moduleIndex = 0; moduleIndex < limit; ++moduleIndex) {
        auto const& module       = mModules[moduleIndex];
        auto const  resolvedHits = resolveModuleHits(module, mSampler->addressHits(moduleIndex));
        modulesJson.push_back(buildModuleJson(module, &resolvedHits));
    }
    return report;
}

void CoverageCatalog::dumpStats(ll::io::Logger& logger) const {
    size_t totalModules = mModules.size();
    size_t pdbMissing   = 0;
    for (auto& module : mModules)
        if (!module.info.hasPdb) ++pdbMissing;

    size_t                          totalFiles = 0;
    std::unordered_set<std::string> files;
    for (auto& module : mModules) {
        for (auto& line : module.lines) files.insert(line.key.file);
    }
    totalFiles = files.size();

    size_t srcFns = 0, expFns = 0;
    for (auto& module : mModules) {
        for (auto& f : module.functions) {
            if (hasTag(f.tags, FunctionTag::SourceFunction)) {
                ++srcFns;
            }
            if (hasTag(f.tags, FunctionTag::ExportedFunction)) {
                ++expFns;
            }
        }
    }

    logger.info(
        "CoverageCatalog: {} modules, {} files, {} source functions, {} exported functions, {} instrumented addrs",
        totalModules,
        totalFiles,
        srcFns,
        expFns,
        mTotalInstrumentedAddresses
    );
    if (pdbMissing) {
        logger.warn("CoverageCatalog: {} modules missing PDB", pdbMissing);
    }
}

nlohmann::json CoverageCatalog::toJson() const {
    nlohmann::json j;
    j["schema"]                     = "coverage-catalog-v1";
    j["totalInstrumentedAddresses"] = mTotalInstrumentedAddresses;
    auto& jmods                     = j["modules"];
    for (auto const& module : mModules) {
        jmods.push_back(buildModuleJson(module));
    }
    return j;
}

} // namespace ll::test::coverage
