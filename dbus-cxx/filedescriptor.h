/***************************************************************************
 *   Copyright (C) 2009,2010 by Rick L. Vinyard, Jr.                       *
 *   rvinyard@cs.nmsu.edu                                                  *
 *   Copyright (C) 2014- by Robert Middleton                               *
 *                                                                         *
 *   This file is part of the dbus-cxx library.                            *
 *                                                                         *
 *   The dbus-cxx library is free software; you can redistribute it and/or *
 *   modify it under the terms of the GNU General Public License           *
 *   version 3 as published by the Free Software Foundation.               *
 *                                                                         *
 *   The dbus-cxx library is distributed in the hope that it will be       *
 *   useful, but WITHOUT ANY WARRANTY; without even the implied warranty   *
 *   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU   *
 *   General Public License for more details.                              *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this software. If not see <http://www.gnu.org/licenses/>.  *
 ***************************************************************************/

#ifndef DBUS_CXX_FILEDESCRIPTOR
#define DBUS_CXX_FILEDESCRIPTOR

namespace DBus{

/**
 * A FileDescriptor holds a UNIX file descriptor that can be passed between processes.
 *
 */
class FileDescriptor{
public:
	FileDescriptor() : m_fd( -1 ){
	}

	static FileDescriptor create( const int& fd ){
		FileDescriptor _fd;
		_fd.m_fd = fd;
		return _fd;
	}

	int getDescriptor() const{
		return m_fd;
	}

private:
	int m_fd;
};

}

#endif