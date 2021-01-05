

std::vector<std::string> split(const std::string& input, char delimeter){
    std::string segment;
    std::vector<std::string> seglist;
    
    while(std::getline(input, segment, delimeter))
       seglist.push_back(segment);
       
    return sedlist;
}

std::ostream& operator<<(std::ostream& os, const std::vector<int>& data)
{
	for (const auto& d : data)
		os << d << " ";
	return os;
}
