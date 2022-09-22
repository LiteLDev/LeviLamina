#include "llapi/db/Row.h"
#include "llapi/HookAPI.h"

namespace DB {

RowHeader::RowHeader(const std::initializer_list<std::string>& list)
: std::vector<std::string>(list) {
}

RowHeader::~RowHeader() {
}

size_t RowHeader::add(const std::string& name) {
    push_back(name);
    hashes.push_back(do_hash2(name));
    return size() - 1;
}

bool RowHeader::contains(const std::string& name) {
    return std::find(hashes.begin(), hashes.end(), do_hash2(name)) != hashes.end();
}

void RowHeader::remove(const std::string& name) {
    auto hs = do_hash2(name);
    for (size_t i = 0; i < size(); ++i) {
        if (hashes[i] == hs) {
            erase(begin() + i);
            hashes.erase(hashes.begin() + i);
            return;
        }
    }
    throw std::runtime_error("RowHeader::remove: Column " + name + " is not found");
}

size_t RowHeader::at(const std::string& name) {
    auto hs = do_hash2(name);
    for (size_t i = 0; i < size(); ++i) {
        if (hashes[i] == hs)
            return i;
    }
    throw std::out_of_range("RowHeader::at: Column " + name + " is not found");
}
std::string& RowHeader::at(size_t index) {
    return Base::at(index);
}

size_t RowHeader::size() const {
    return Base::size();
}

bool RowHeader::empty() const {
    return Base::empty();
}

std::vector<std::string>::iterator RowHeader::begin() {
    return Base::begin();
}

std::vector<std::string>::iterator RowHeader::end() {
    return Base::end();
}

bool RowHeader::check(const Row& row) const {
    if (row.header.get() == this)
        return true;

    if (row.size() == size()) {
        if (row.header && !row.header->empty()) {
            if (row.header->size() == size())
                return true;
            else
                return false;
        }
        return true;
    }
    return false;
}

size_t RowHeader::operator[](const std::string& name) {
    auto hs = do_hash2(name);
    for (size_t i = 0; i < size(); ++i) {
        if (hashes[i] == hs)
            return i;
    }
    return add(name);
}
std::string& RowHeader::operator[](size_t index) {
    return at(index);
}


Row::Row(const std::shared_ptr<RowHeader>& header)
: header(header) {
}
Row::Row(const RowHeader& header)
: header(new RowHeader(header)) {
}
Row::Row(const std::initializer_list<Any>& list, const RowHeader& header)
: std::vector<Any>(list)
, header(new RowHeader(header)) {
    if (!header.empty() && list.size() != header.size()) {
        throw std::invalid_argument("Row::Row: The row and the header mismatch");
    }
}
Row::Row(const std::initializer_list<Any>& list, const std::shared_ptr<RowHeader>& header)
: std::vector<Any>(list)
, header(header) {
    if (header != nullptr && list.size() != header->size()) {
        throw std::invalid_argument("Row::Row: The row and the header mismatch");
    }
}
Row::Row(std::vector<Any>&& list, const RowHeader& header)
: std::vector<Any>(std::move(list))
, header(new RowHeader(header)) {
    if (size() != header.size()) {
        list = std::move(*this); // Restore
        throw std::invalid_argument("Row::Row: The row and the header mismatch");
    }
}
Row::Row(const std::vector<Any>& list, const RowHeader& header)
: std::vector<Any>(list)
, header(new RowHeader(header)) {
    if (list.size() != header.size()) {
        throw std::invalid_argument("Row::Row: The row and the header mismatch");
    }
}
Row::Row(const std::initializer_list<std::pair<std::string, Any>>& list)
: header(new RowHeader()) {
    for (auto& pair : list) {
        header->add(pair.first);
        this->push_back(pair.second);
    }
}
Row::Row(Row&& row) noexcept
: header(row.header) {
    *this = std::move(row);
}
Row::Row(const Row& row)
: header(row.header) {
    *this = row;
}

Row& Row::operator=(Row&& row) noexcept {
    header = row.header;
    this->swap(row);
    return *this;
}
Row& Row::operator=(const Row& row) {
    header = row.header;
    this->assign(row.begin(), row.end());
    return *this;
}

Any& Row::operator[](const std::string& name) {
    auto idx = (*header)[name];
    if (idx < (int)size())
        return std::vector<Any>::at(idx);
    resize((size_t)idx + 1, Any());
    return std::vector<Any>::at(idx);
}
const Any& Row::operator[](const std::string& name) const {
    return std::vector<Any>::at(header->at(name));
}

Any& Row::at(const std::string& name) {
    return std::vector<Any>::at(header->at(name));
}
const Any& Row::at(const std::string& name) const {
    return std::vector<Any>::at(header->at(name));
}

void Row::forEach_ref(std::function<bool(const std::string&, Any&)> cb) {
    if (!this->header)
        return;
    for (auto& col : *this->header) {
        if (!cb(col, this->at(col)))
            break;
    }
}

void Row::forEach(std::function<bool(const std::string&, const Any&)> cb) const {
    if (!this->header)
        return;
    int i = 0;
    for (auto& col : *this->header) {
        if (!cb(col, this->data()[i]))
            break;
        i++;
    }
}

} // namespace DB