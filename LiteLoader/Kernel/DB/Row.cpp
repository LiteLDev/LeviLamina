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
    : std::vector<std::string>(list)
{
}

size_t RowHeader::add(const std::string& name)
{
    push_back(name);
    return size() - 1;
}

bool RowHeader::contains(const std::string& name)
{
    return std::find(begin(), end(), name) != std::vector<std::string>::end();
}

void RowHeader::remove(const std::string& name)
{
    auto it = std::find(begin(), end(), name);
    if (it != end())
        erase(it);
}

size_t RowHeader::at(const std::string& name)
{
    for (size_t i = 0; i < size(); ++i)
    {
        if (at(i) == name)
            return i;
    }
    throw std::out_of_range("Column " + name + " is not found");
}
std::string& RowHeader::at(size_t index)
{
    return std::vector<std::string>::at(index);
}

size_t RowHeader::size() const
{
    return std::vector<std::string>::size();
}

std::vector<std::string>::iterator RowHeader::begin()
{
    return std::vector<std::string>::begin();
}

std::vector<std::string>::iterator RowHeader::end()
{
    return std::vector<std::string>::end();
}

size_t RowHeader::operator[](const std::string& name)
{
    if (contains(name))
    {
        return at(name);
    }
    return add(name);
}
std::string& RowHeader::operator[](size_t index)
{
    return at(index);
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
        throw std::invalid_argument("Row::Row: row and header mismatch");
    }
}
Row::Row(std::vector<Any>&& list, RowHeader& header)
    : std::vector<Any>(std::move(list))
    , header(header)
{
    if (size() != header.size())
    {
        list = std::move(*this); // Restore
        throw std::invalid_argument("Row::Row: row and header mismatch");
    }
}
Row::Row(const std::vector<Any>& list, RowHeader& header)
    : std::vector<Any>(list)
    , header(header)
{
    if (list.size() != header.size())
    {
        throw std::invalid_argument("Row::Row: row and header mismatch");
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
    *this = std::move(row);
}
Row::Row(const Row& row)
    : header(row.header)
{
    *this = row;
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
    if (idx < (int)size())
        return std::vector<Any>::at(idx);
    resize((size_t)idx + 1, Any());
    return std::vector<Any>::at(idx);
}
Any& Row::operator[](size_t idx)
{
    if (idx < size())
        return std::vector<Any>::at(idx);
    resize((size_t)idx + 1, Any());
    return std::vector<Any>::at(idx);
}

Any& Row::at(const std::string& name)
{
    return std::vector<Any>::at(header.at(name));
}
Any& Row::at(size_t idx)
{
    return std::vector<Any>::at(idx);
}

void Row::forEach(std::function<bool(const std::string&, Any&)> cb)
{
    for (auto& col : this->header)
    {
        if (!cb(col, this->at(col))) break;
    }
}

} // namespace DB