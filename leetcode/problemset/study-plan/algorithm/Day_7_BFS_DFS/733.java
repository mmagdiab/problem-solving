/*733. Flood Fill
An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.
You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].
To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on.
Replace the color of all of the aforementioned pixels with color.
Return the modified image after performing the flood fill.*/
class Solution {
    public  int[][] floodFill(int[][] image, int sr, int sc, int color) {
        int newColor = color;
        int targetColor = image[sr][sc];
        if (targetColor != newColor) dfs(image, sr, sc, targetColor, newColor);
        return image;
    }

    public  void dfs(int[][] image, int sr, int sc, int targetColor, int newColor) {
        if (image[sr][sc] == targetColor) {
            image[sr][sc] = newColor;
            if (sr - 1 >= 0) dfs(image, sr - 1, sc, targetColor, newColor);
            if (sr + 1 < image.length) dfs(image, sr + 1, sc, targetColor, newColor);
            if (sc - 1 >= 0) dfs(image, sr, sc - 1, targetColor, newColor);
            if (sc + 1 < image[0].length) dfs(image, sr, sc + 1, targetColor, newColor);

        }
    }
}