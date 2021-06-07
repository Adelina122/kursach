#include "Error.h"

Error::Error(const char* text) : information(information) {}

const char* Error::getMessage(void) const
{
	return information;
}

FlowersError::FlowersError(const char* information) : Error(information) {}

SellerError::SellerError(const char* information) : Error(information) {}

ProviderError::ProviderError(const char* information) : Error(information) {}

FileError::FileError(const char* information) : Error(information) {}