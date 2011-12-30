/* PageRangesSupported.java --
   Copyright (C) 2006 Free Software Foundation, Inc.

This file is part of GNU Classpath.

GNU Classpath is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU Classpath is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Classpath; see the file COPYING.  If not, write to the
Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA.

Linking this library statically or dynamically with other modules is
making a combined work based on this library.  Thus, the terms and
conditions of the GNU General Public License cover the whole
combination.

As a special exception, the copyright holders of this library give you
permission to link this library with independent modules to produce an
executable, regardless of the license terms of these independent
modules, and to copy and distribute the resulting executable under
terms of your choice, provided that you also meet, for each linked
independent module, the terms and conditions of the license of that
module.  An independent module is a module which is not derived from
or based on this library.  If you modify this library, you may extend
this exception to your version of the library, but you are not
obligated to do so.  If you do not wish to do so, delete this
exception statement from your version. */

package gnu.javax.print.ipp.attribute.supported;

import javax.print.attribute.Attribute;
import javax.print.attribute.EnumSyntax;
import javax.print.attribute.SupportedValuesAttribute;

/**
 * <code>PageRangesSupported</code> is a boolean typed
 * attribute indicating (as EnumSyntax) if page ranges
 * are supported.
 *
 * @author Wolfgang Baer (WBaer@gmx.de)
 */
public final class PageRangesSupported extends EnumSyntax
  implements SupportedValuesAttribute
{
  /** Page ranges are not supported. */
  public static final PageRangesSupported NOT_SUPPORTED =
    new PageRangesSupported(0);

  /** Page ranges are supported. */
  public static final PageRangesSupported SUPPORTED =
    new PageRangesSupported(1);

  private static final String[] stringTable = { "not-supported", "supported" };

  private static final PageRangesSupported[] enumValueTable = { NOT_SUPPORTED,
                                                                SUPPORTED };

  /**
   * Constructs a <code>PageRangesSupported</code> object.
   *
   * @param value the enum value
   */
  protected PageRangesSupported(int value)
  {
    super(value);
  }

  /**
   * Returns category of this class.
   *
   * @return The class <code>PageRangesSupported</code> itself.
   */
  public Class<? extends Attribute> getCategory()
  {
    return PageRangesSupported.class;
  }

  /**
   * Returns the name of this attribute.
   *
   * @return The name "page-ranges-supported".
   */
  public String getName()
  {
    return "page-ranges-supported";
  }

  /**
   * Returns a table with the enumeration values represented as strings
   * for this object.
   *
   * @return The enumeration values as strings.
   */
  protected String[] getStringTable()
  {
    return stringTable;
  }

  /**
   * Returns a table with the enumeration values for this object.
   *
   * @return The enumeration values.
   */
  protected EnumSyntax[] getEnumValueTable()
  {
    return enumValueTable;
  }
}
