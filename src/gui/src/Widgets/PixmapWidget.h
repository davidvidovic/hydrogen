/*
 * Hydrogen
 * Copyright(c) 2002-2008 by Alex >Comix< Cominu [comix@users.sourceforge.net]
 * Copyright(c) 2008-2025 The hydrogen development team [hydrogen-devel@lists.sourceforge.net]
 *
 * http://www.hydrogen-music.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see https://www.gnu.org/licenses
 *
 */

#ifndef PIXMAP_WIDGET_H
#define PIXMAP_WIDGET_H

#include <QtGui>
#include <QtWidgets>

#include <core/Object.h>

/** \ingroup docGUI docWidgets*/
class PixmapWidget :   public H2Core::Object<PixmapWidget>, public QWidget
{
    H2_OBJECT(PixmapWidget)
	public:
		PixmapWidget( QWidget *pParent );
		~PixmapWidget();

		void setPixmap( const QString& sPixmapPath, bool expand_horiz = false );
		void setColor( const QColor& color );

	protected:
		QString m_sPixmapPath;
		QColor __color;
		QPixmap m_pixmap;
		bool __expand_horiz;

		virtual void paintEvent( QPaintEvent* ev) override;
};

#endif
