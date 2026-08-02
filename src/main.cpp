#include <iostream>
#include <iomanip>
#include <ctime>

#include "pcap_reader.h"
#include "packet_parser.h"

using namespace PacketAnalyzer;

void printUsage(const char* program_name) {
    std::cout << "Usage: " << program_name << " <pcap_file> [max_packets]\n";
    std::cout << "\nArguments:\n";
    std::cout << "  pcap_file   - Path to a .pcap file captured by Wireshark\n";
    std::cout << "  max_packets - (Optional) Maximum number of packets to display\n";
}

int main(int argc, char* argv[]) {

    std::cout << "====================================\n";
    std::cout << "     Packet Analyzer v1.0\n";
    std::cout << "====================================\n\n";

    if (argc < 2) {
        printUsage(argv[0]);
        return 1;
    }

    std::string filename = argv[1];

    int max_packets = -1;

    if (argc >= 3) {
        max_packets = std::stoi(argv[2]);
    }
}