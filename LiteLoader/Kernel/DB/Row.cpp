#include <DB/Row.h>

namespace DB
{

// Internal
RowHeader getRowHeader(std::initializer_list<std::pair<std::string, Any>> list)
{
    RowHeader header;
    for (auto& pair : list)
    {
        header.add(pair.first);
    }
    return header;
}

RowHeader::RowHeader(const std::initializer_list<std::string>& list)
{
    for (auto& name : list)
    {
        (*this)[name] = (int)size() - 1;
    }
}

int RowHeader::add(const std::string& name)
{
    return (*this)[name];
}

bool RowHeader::contains(const std::string& name) const
{
    return find(name) != std::unordered_map<std::string, int>::end();
}

void RowHeader::remove(const std::string& name)
{
    erase(name);
}

int& RowHeader::at(const std::string& name)
{
    return std::unordered_map<std::string, int>::at(name);
}

size_t RowHeader::size() const
{
    return std::unordered_map<std::string, int>::size();
}

std::unordered_map<std::string, int>::iterator RowHeader::begin()
{
    return std::unordered_map<std::string, int>::begin();
}

std::unordered_map<std::string, int>::iterator RowHeader::end()
{
    return std::unordered_map<std::string, int>::end();
}

int& RowHeader::operator[](const std::string& name)
{
    if (!count(name))
    {
        return std::unordered_map<std::string, int>::operator[](name) = (int)size() - 1;
    }
    return std::unordered_map<std::string, int>::operator[](name);
}

Row::Row(RowHeader& header)
    : header(header)
{
}
Row::Row(const std::initializer_list<Any>& list, RowHeader& header)
    : std::vector<Any>(list)
    , header(header)
{
    if (list.size() != header.size())
    {
        throw std::invalid_argument("$Core$ Row::Row: row and header mismatch");
    }
}
Row::Row(std::vector<Any>&& list, RowHeader& header)
    : std::vector<Any>(std::move(list))
    , header(header)
{
    if (size() != header.size())
    {
        list = std::move(*this); // Restore
        throw std::invalid_argument("$Core$ Row::Row: row and header mismatch");
    }
}
Row::Row(const std::vector<Any>& list, RowHeader& header)
    : std::vector<Any>(list)
    , header(header)
{
    if (list.size() != header.size())
    {
        throw std::invalid_argument("$Core$ Row::Row: row and header mismatch");
    }
}
Row::Row(const std::initializer_list<std::pair<std::string, Any>>& list, RowHeader& header)
    : header(header)
{
    for (auto& pair : list)
    {
        header.add(pair.first);
        this->push_back(pair.second);
    }
}
Row::Row(const std::initializer_list<std::pair<std::string, Any>>& list)
    : header(getRowHeader(list)) // RowHeader -> RowHeader&, MSVC with `/permissive` only
{
    for (auto& pair : list)
    {
        this->push_back(pair.second);
    }
}
Row::Row(const std::initializer_list<Any>& list)
    : std::vector<Any>(list)
    , header(RowHeader())
{
}
Row::Row(Row&& row) noexcept
    : header(row.header)
{
    this->swap(row);
}
Row::Row(const Row& row)
    : header(row.header)
{
    this->assign(row.begin(), row.end());
}

Row& Row::operator=(Row&& row) noexcept
{
    header = row.header;
    this->swap(row);
    return *this;
}
Row& Row::operator=(const Row& row)
{
    header = row.header;
    this->assign(row.begin(), row.end());
    return *this;
}

Any& Row::operator[](const std::string& name)
{
    auto idx = header[name];
    if (idx < size())
        return std::vector<Any>::at(idx);
    resize(idx + 1, Any());
    return std::vector<Any>::at(idx);
}
Any& Row::at(const std::string& name)
{
    return std::vector<Any>::at(header.at(name));
}
void Row::forEach(std::function<bool(const std::string&, Any&)> cb)
{
    for (auto& pair : this->header)
    {
        if (!cb(pair.first, this->at(pair.first))) break;
    }
}

} // namespace DB