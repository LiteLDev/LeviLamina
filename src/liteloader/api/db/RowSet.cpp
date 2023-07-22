#include "liteloader/api/db/RowSet.h"

namespace DB {

RowSet::RowSet(const std::shared_ptr<RowHeader>& header)
: std::vector<Row>()
, header(header) {
    if (!header) {
        this->header = std::make_shared<RowHeader>();
    }
}

RowSet::RowSet(const RowHeader& header)
: std::vector<Row>()
, header(new RowHeader(header)) {
}
RowSet::RowSet(RowSet&& set) noexcept
: std::vector<Row>(std::move(set))
, header(set.header) {
}
RowSet::RowSet(const RowSet& set)
: std::vector<Row>(set)
, header(set.header) {
}
RowSet& RowSet::operator=(RowSet&& set) noexcept {
    Base::operator=(std::move(set));
    header = set.header;
    return *this;
}
RowSet& RowSet::operator=(const RowSet& set) {
    Base::operator=(set);
    header = set.header;
    return *this;
}

void RowSet::add(const Row& row) {
    if (header && !header->empty()) {
        if (!header->check(row))
            throw std::runtime_error("RowSet::add: Row doesn't match header");
    } else if (row.header && !row.header->empty()) {
        header = row.header;
    }
    Base::push_back(row);
    if (!row.header || row.header->empty()) {
        Base::back().header = header;
    }
}

bool RowSet::valid() {
    if (!header)
        return false;
    size_t rowSize = header->size();
    if (!rowSize)
        return false;
    for (auto& row : *this) {
        if (row.size() != rowSize)
            return false;
    }
    return true;
}

void RowSet::push_back(const Row& row) {
    add(row);
}

std::string RowSet::toTableString(const std::string& nullPattern) const {
    if (!header || !header->size())
        return "";
    std::string result, dividingLine;
    // Get the field widths
    std::vector<size_t> colWidths;
    for (size_t i = 0; i < header->size(); ++i) {
        colWidths.push_back(header->at(i).size());
    }
    for (auto& row : *this) {
        for (size_t i = 0; i < row.size(); ++i) {
            auto val = row.data()[i];
            if (val.is_null()) {
                colWidths[i] = std::max(sizeof(nullPattern) - 1, colWidths[i]);
            }
            colWidths[i] = std::max(val.get<std::string>().size(), colWidths[i]);
        }
    }
    // Build the dividing line like '|====|=====|'
    for (auto& w : colWidths) {
        dividingLine += "|" + std::string(w + 2, '=');
    }
    dividingLine += "|\n";
    // Build the table header
    for (size_t i = 0; i < header->size(); ++i) {
        result += fmt::format("| {:^{}} ", header->at(i), colWidths[i]);
    }
    result += "|\n";
    result += dividingLine;
    // Build the table body
    for (auto& row : *this) {
        for (size_t i = 0; i < row.size(); ++i) {
            auto val = row.data()[i];
            if (val.is_null()) {
                result += fmt::format("| {:<{}} ", nullPattern, colWidths[i]);
            } else {
                result += fmt::format("| {:<{}} ", val.get<std::string>(), colWidths[i]);
            }
        }
        result += "|\n";
    }
    // Last line
    result += dividingLine;
    return result;
}

} // namespace DB