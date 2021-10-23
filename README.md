# Linkedlist
<ul>
  <li>If we want to know about linkedlist first we have to know why linkedlist came into picture</li>
  <li>Linkedlist came into the picture because of drawbacks of array</li>
  <ul>
    <li>We cannot insert elements more than the size of array</li>
    <li>Memory wastage</li>
  </ul>
</ul>
<h2>Defination</h2>
<h3>Linkedlist is a linear data structure which is collection of nodes in which one node is connected to another node and the node consists of two parts, i.e., one is data part and other one is address part</h3>
<h2>Types of linkedlist</h2>
<ul>
  <li>Single linkedlist</li>
  <li>Double linkedlist</li>
  <li>Circular linkedlist</li>
</ul>
<h3>Single linkedlist</h3>
<ul>
  <li>Singly linked list can be defined as the collection of ordered set of elements</li>
  <li>A node in the singly linked list consist of two parts: data part and link part</li>
  <li>Data part of the node stores actual information that is to be represented by the node while the link part of the node stores the address of its immediate successor</li>
</ul>
<table>
  <tr>
    <th>Data Field</th>
    <th>Address Field</th>
  </tr>
</table>
<h3>Double linkedlist</h3>
<ul>
  <li>Doubly linked list is a complex type of linked list in which a node contains a pointer to the previous as well as the next node in the sequence</li> 
  <li>Therefore, in a doubly linked list, a node consists of three parts: node data, pointer to the next node in sequence (next pointer) , pointer to the previous node (previous pointer)</li>
</ul>
<table>
  <tr>
    <td>prev</td>
    <td>data</td>
    <td>next</td>
  </tr>
</table>
<h3>Circular linkedlist</h3>
<ul>
  <li>In a circular Singly linked list, the last node of the list contains a pointer to the first node of the list</li>
  <li>We traverse a circular singly linked list until we reach the same node where we started</li>
  <li>The circular singly liked list has no beginning and no ending</li>
  <li>There is no null value present in the next part of any of the nodes</li>
</ul>
<img src="https://image.slidesharecdn.com/circularlinkedlist-110919032425-phpapp02/95/circular-linked-list-4-728.jpg?cb=1316404933">
  
